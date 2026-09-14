package com.example.java.resources;

import java.io.FileNotFoundException;
import java.io.IOException;
import org.junit.Test;

import static org.junit.Assert.*;

public class ResourceReaderTest {

    @Test
    public void testRead() throws IOException {
        assertEquals("This is a test text.\n", ResourceReader.read("/data/foo.txt"));
        assertEquals("123\n", ResourceReader.read("/data/a.txt"));
        assertEquals("foo=1\nbar=2\n", ResourceReader.read("/package_demo/conf/hello_world.conf"));
    }

    @Test
    public void testFileNotFound() {
        assertThrows(FileNotFoundException.class, () -> ResourceReader.read("/data/bar.txt"));
    }
}
