package entities.creatures;

import game.Game;

public class FiringEnemy extends Creature{
	private Game game;
	private char c = '!';
	
	public FiringEnemy(Game game, int x, int y) {	
		super(x, y);
		super.health = 10;
		this.game = game;
	}
	
	@Override
	public void tick() {
	}
}
