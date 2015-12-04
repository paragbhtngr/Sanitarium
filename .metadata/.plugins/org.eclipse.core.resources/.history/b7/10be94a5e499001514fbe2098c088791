package entities.creatures;

import game.Game;

public class PatrolEnemy extends Creature{
	
	private Game game;
	private boolean isLRPatrol; // is patrol up-down or left-right?
	private char c = '!';
	
	public Game getGame() { return game; }
	public void setGame(Game game) { this.game = game; }
	public boolean isLRPatrol() { return isLRPatrol; }
	public void setLRPatrol(boolean isLRPatrol) { this.isLRPatrol = isLRPatrol; }
	public char getC() { return c; }
	public void setC(char c) { this.c = c; }
	
	public PatrolEnemy(Game game, int x, int y, boolean direction) {	
		super(x, y);
		super.health = 10;
		this.isLRPatrol = direction;
		this.game = game;
	}
	
	@Override
	public void tick() {
	}

}
