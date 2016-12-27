/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(void)dealloc;
-(NSArray *)candidates;
-(id)keyboardBehaviors;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputCount;
-(id)defaultCandidate;
-(BOOL)canHandleKeyHitTest;
-(CHRecognizer *)recognizer;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(void)updateCandidates;
-(TIHandwritingStrokes *)userDrawing;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
@end

