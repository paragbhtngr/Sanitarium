package input;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class KeyManager implements KeyListener {
	
	private boolean[] keys;
	private boolean ctrl;
	public boolean up, down, left, right;
	public boolean smash, throwUp, throwDown, throwLeft, throwRight, usePotion;
	public boolean to1, to2, to3;
	public boolean from1, from2, from3;
	public boolean annihilate; // FOR DEVELOPMENT PURPOSES ONLY!
	public KeyManager(){
		keys = new boolean[256];
	}
	
	public void tick(){
		// Direction controls
		up = keys[KeyEvent.VK_UP];
		down = keys[KeyEvent.VK_DOWN];
		left = keys[KeyEvent.VK_LEFT];
		right = keys[KeyEvent.VK_RIGHT];
		
		// Attack
		smash = keys[KeyEvent.VK_SPACE];
		throwUp = keys[KeyEvent.VK_W];
		throwDown = keys[KeyEvent.VK_S];
		throwLeft = keys[KeyEvent.VK_A];
		throwRight = keys[KeyEvent.VK_D];
		
		// Use Potion item
		usePotion = keys[KeyEvent.VK_SHIFT];
		
		// Save file slots
		to1 = keys[KeyEvent.VK_1];
		to2 = keys[KeyEvent.VK_2];
		to3 = keys[KeyEvent.VK_3];
		
		// Load file slots
		from1 = keys[KeyEvent.VK_F1];
		from2 = keys[KeyEvent.VK_F2];
		from3 = keys[KeyEvent.VK_F3];
		
		// ANNIHILATE THE PUNY SCUM!!! D:<
		annihilate = keys[KeyEvent.VK_DELETE];
	}
	
	@Override
	public void keyPressed(KeyEvent e) {
		keys[e.getKeyCode()] = true;
//		System.out.println("Pressed");
	}

	@Override
	public void keyReleased(KeyEvent e) {
		keys[e.getKeyCode()] = false;
	}
	

	@Override
	public void keyTyped(KeyEvent e) {
		// TODO Auto-generated method stub
	}

}
