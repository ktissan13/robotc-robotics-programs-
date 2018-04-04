void PacMan()
{
	//        200 = Tempo
	//          5 = Default octave
	//       16th = Default note length
	//        10% = Break between notes
	//
	PlayTone(  987,   39); wait1Msec( 429);  // Note(B5)
	PlayTone( 1481,   39); wait1Msec( 429);  // Note(B)
	PlayTone( 1109,   39); wait1Msec( 429);  // Note(F#)
	PlayTone(  933,   39); wait1Msec( 429);  // Note(D#)
	PlayTone( 1481,   77); wait1Msec( 857);  // Note(B, Duration(Eighth))
	PlayTone(  933,   77); wait1Msec( 857);  // Note(D#, Duration(Eighth))
	PlayTone(  784,   39); wait1Msec( 429);  // Note(C)
	PlayTone( 1046,   39); wait1Msec( 429);  // Note(C7)
	PlayTone( 1175,   39); wait1Msec( 429);  // Note(G)
	PlayTone( 1047,   39); wait1Msec( 429);  // Note(F)
	PlayTone( 1046,   77); wait1Msec( 857);  // Note(C7, Duration(Eighth))
	PlayTone(  988,   77); wait1Msec( 857);  // Note(E, Duration(Eighth))
	PlayTone(  987,   39); wait1Msec( 429);  // Note(B5)
	PlayTone( 1481,   39); wait1Msec( 429);  // Note(B)
	PlayTone( 1109,   39); wait1Msec( 429);  // Note(F#)
	PlayTone(  933,   39); wait1Msec( 429);  // Note(D#)
	PlayTone( 1481,   77); wait1Msec( 857);  // Note(B, Duration(Eighth))
	PlayTone(  933,   77); wait1Msec( 857);  // Note(D#, Duration(Eighth))
	PlayTone(  933,   19); wait1Msec( 214);  // Note(D#, Duration(32th))
	PlayTone(  988,   19); wait1Msec( 214);  // Note(E, Duration(32th))
	PlayTone( 1047,   39); wait1Msec( 429);  // Note(F)
	PlayTone( 1047,   19); wait1Msec( 214);  // Note(F, Duration(32th))
	PlayTone( 1109,   19); wait1Msec( 214);  // Note(F#, Duration(32th))
	PlayTone( 1175,   39); wait1Msec( 429);  // Note(G)
	PlayTone( 1175,   19); wait1Msec( 214);  // Note(G, Duration(32th))
	PlayTone( 1245,   19); wait1Msec( 214);  // Note(G#, Duration(32th))
	PlayTone( 1320,   39); wait1Msec( 429);  // Note(A)
	PlayTone( 1481,   77); wait1Msec( 857);  // Note(B, Duration(Eighth))
	return;
}

task main()
{
	while(true)
	{
		PlayTone(  784,   54); wait1Msec( 600);  // Note(C6, Duration(Half))
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   14); wait1Msec( 150);  // Note(C6, Duration(Eighth))
		PlayTone(  784,   14); wait1Msec( 150);  // Note(C6, Duration(Eighth))
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  659,   14); wait1Msec( 150);  // Note(E, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  659,   27); wait1Msec( 300);  // Note(E)
		PlayTone(  659,   14); wait1Msec( 150);  // Note(E, Duration(Eighth))
		PlayTone(  698,   41); wait1Msec( 450);  // Note(F, Duration(Quarter .))
		PlayTone(  659,   27); wait1Msec( 300);  // Note(E)
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  830,   27); wait1Msec( 300);  // Note(G#)
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  987,   41); wait1Msec( 450);  // Note(B, Duration(Quarter .))
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   54); wait1Msec( 600);  // Note(C6, Duration(Half))
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   14); wait1Msec( 150);  // Note(C6, Duration(Eighth))
		PlayTone(  784,   14); wait1Msec( 150);  // Note(C6, Duration(Eighth))
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  784,   27); wait1Msec( 300);  // Note(C6)
		PlayTone(  987,   27); wait1Msec( 300);  // Note(B)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  659,   14); wait1Msec( 150);  // Note(E, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		PlayTone(  659,   27); wait1Msec( 300);  // Note(E)
		PlayTone(  659,   14); wait1Msec( 150);  // Note(E, Duration(Eighth))
		PlayTone(  698,   41); wait1Msec( 450);  // Note(F, Duration(Quarter .))
		PlayTone(  659,   27); wait1Msec( 300);  // Note(E)
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  830,   27); wait1Msec( 300);  // Note(G#)
		PlayTone(  880,   14); wait1Msec( 150);  // Note(A, Duration(Eighth))
		PlayTone(  987,   41); wait1Msec( 450);  // Note(B, Duration(Quarter .))
		PlayTone(  880,   27); wait1Msec( 300);  // Note(A)
		return;




}
}
