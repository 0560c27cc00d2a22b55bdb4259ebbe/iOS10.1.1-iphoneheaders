/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManager_zh_ShapeBased.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManager_zh_ShapeBased <TIKeyboardInputManagerChineseCompletion> {

	TIKeyboardCandidate* _autoConfirmationCandidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * autoConfirmationCandidate;              //@synthesize autoConfirmationCandidate=_autoConfirmationCandidate - In the implementation block
+(Class)wordSearchClass;
-(void)dealloc;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)inputsToReject;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(BOOL)supportsPairedPunctutationInput;
-(int)inputMethodType;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)formattedSearchString;
-(BOOL)isWubi:(id)arg1 ;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)autoConfirmationCandidate;
@end
