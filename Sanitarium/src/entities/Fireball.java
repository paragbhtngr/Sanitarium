package entities;

import game.Game;

public class Fireball extends Arrow {

	public Fireball(Game game, int dir, int _y, int _x) {
		super(game, dir, _y, _x);
		super.setCh('*');
	}
}
