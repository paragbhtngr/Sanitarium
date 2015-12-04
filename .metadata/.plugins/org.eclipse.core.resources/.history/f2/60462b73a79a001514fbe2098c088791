package entities.creatures;

import game.Game;

public class FiringEnemy extends Creature{
	private Game game;
	private int dir = 2;
	private char c = 'O';
	
	public FiringEnemy(Game game, int x, int y) {	
		super(x, y);
		super.health = 50;
		this.game = game;
	}
	
	
	public Game getGame() { return game; }
	public void setGame(Game game) { this.game = game; }
	public int getDir() { return dir; }
	public void setDir(int dir) { this.dir = dir; }
	public void addDir() { 
		if(this.dir == 8){
			this.dir = 0;
		}
		else {
			this.dir += 2;
		}
	}
	public char getC() { return c; }
 	public void setC(char c) { this.c = c; }

	@Override
	public void tick() {
	}
}
