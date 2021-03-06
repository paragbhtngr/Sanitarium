package entities;

import java.awt.Graphics;
import java.util.List;

import game.Game;

public class Arrow {
	private Game game;
	private char ch; //
	private int direction; //using numpad as reference for directions
	private int x, y;
	
	public Arrow(Game game, int dir, int _y, int _x){
		this.game = game;
		this.direction = dir;
		switch(dir){
		case 2: 
			this.ch = 'v';
			break;
		case 4: 
			this.ch = '<';
			break;
		case 6: 
			this.ch = '>';
			break;
		case 8: 
			this.ch = '^';
			break;
		}
		
		this.x = _x;
		this.y = _y;
	}

	public char getCh() {return ch;}
	public void setCh(char ch) {this.ch = ch;}
	public int getDirection() {return direction;}
	public void setDirection(int direction) {this.direction = direction;}
	public int getX() {return x;}
	public void setX(int x) {this.x = x;}
	public int getY() {return y;}
	public void setY(int y) {this.y = y;}

	public void tick(char[][] renderMap) {
		switch(this.direction){
		case 2: 
			this.y++;
			break;
		case 4: 
			this.x--;
			break;
		case 6: 
			this.x++;
			break;
		case 8: 
			this.y--;
			break;
		}
	}
	
	
	
	
}
