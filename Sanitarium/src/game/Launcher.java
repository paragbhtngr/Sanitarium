package game;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Launcher {
	
	public static void main(String[] args){
		
		Game game = new Game("Title!", 1280, 720);
		game.start();
	}
}
