package entities.creatures;

import game.Game;

public class WanderingEnemy extends Creature{
	private Game game;
	private char c = '!';
	
	public WanderingEnemy(Game game, int x, int y) {	
		super(x, y);
		super.health = 10;
		this.game = game;
	}
	
	@Override
	public void tick() {
	}
}
