package entities.creatures;

import game.Game;

public class WanderingEnemy extends Creature{
	private Game game;
	private char c = '&';
	
	public Game getGame() { return game; }
	public void setGame(Game game) { this.game = game; }
	public char getC() { return c; }
	public void setC(char c) { this.c = c; }

	public WanderingEnemy(Game game, int x, int y) {	
		super(x, y);
		super.health = 20;
		this.game = game;
	}
	
	@Override
	public void tick() {
	}
}
