package com.example.java.resources;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Scanner;

public class ResourceReader {
    public static String read(String fileName) throws IOException {
        try (InputStream is = ResourceReader.class.getResourceAsStream(fileName)) {
            if (is == null)
                throw new FileNotFoundException(fileName);
            Scanner scanner = new Scanner(is, "UTF-8");
            StringBuilder result = new StringBuilder();
            while (scanner.hasNextLine())
                result.append(scanner.nextLine()).append('\n');
            return result.toString();
        }
    }
}
