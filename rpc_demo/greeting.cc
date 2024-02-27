#include <string>

#include "common/net/http/server/http_server.h"
#include "common/net/uri/query_params.h"

using namespace std;

void greet(const gdt::HttpRequest* request, gdt::HttpResponse* response);

int main() {
    gdt::HttpServer server;
    server.RegisterHttpHandler("/greet", gdt::NewPermanentCallback(greet));
    server.Listen("9.134.208.208", 8080);
    server.Start();
    server.WaitForStop();
    return 0;
}

void greet(const gdt::HttpRequest* request, gdt::HttpResponse* response) {
    gdt::QueryParams query_params;
    query_params.ParseFromRequest(request);
    std::string name = query_params.GetAsString("name");

    if (name == "400") {
        response->set_status(gdt::HttpResponse::Status_BadRequest);
        response->set_body("Sorry, bad request");
    } else if (name == "500") {
        response->set_status(gdt::HttpResponse::Status_InternalServerError);
        response->set_body("Sorry, something went wrong");
    } else {
        response->set_status(gdt::HttpResponse::Status_OK);
        response->set_body("Hello, " + name + "!");
    }
}
