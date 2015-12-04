package entities.creatures;

import game.Game;

public class PatrolEnemy extends Creature{
	
	private Game game;
	private boolean isLRPatrol = true; // is patrol up-down or left-right?
	private boolean isPosDir = true;
	private char c = '!';
	
	public Game getGame() { return this.game; }
	public void setGame(Game game) { this.game = game; }
	public boolean isLRPatrol() { return this.isLRPatrol; }
	public boolean isPosDir() { return this.isPosDir; }
	public void setLRPatrol(boolean isLRPatrol) { this.isLRPatrol = isLRPatrol; }
	public void setIsPosDir(boolean b){ this.isPosDir = b; }
	public void toggleIsPosDir() { this.isPosDir = !isPosDir; }
	public char getC() { return c; }
	public void setC(char c) { this.c = c; }
	
	public PatrolEnemy(Game game, int x, int y, boolean isLRPatrol) {	
		super(x, y);
		super.health = 10;
		this.isLRPatrol = isLRPatrol;
		this.game = game;
	}
	
	@Override
	public void tick() {
	}

}
