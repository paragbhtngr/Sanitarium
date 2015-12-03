package entities;

import game.Game;

public class Potion {
	
	private Game game;
	private char ch = 'P'; 
	private int x,y;
	
	public Potion(Game game, int x, int y){
		this.game = game;
		this.x = x;
		this.y = y;
	}

	public Game getGame() { return game;}
	public void setGame(Game game) { this.game = game; }
	public char getCh() {return ch;}
	public void setCh(char ch) {this.ch = ch;}
	public int getX() {return x;}
	public void setX(int x) {this.x = x;}
	public int getY() {return y;}
	public void setY(int y) {this.y = y;}

	
	public void tick() {	
	}

}
