/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSDictionary, TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	NSDictionary* _kanaromapat;
	NSDictionary* _kanaroma;
	unsigned long long _insertKatakanaAtIndex;
	/*^block*/id _contactObserver;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(/*^block*/id)configureContactCollectionObserver:(id)arg1 previousObserver:(/*^block*/id)arg2 ;
+(id)sharedMecabraWrapper;
+(void)resetSharedMecabraWrapper;
+(void)clearCachedContactObserver;
+(void)sendDictionaryUpdatePathsForInputMode:(id)arg1 toMecabra:(id)arg2 onQueue:(id)arg3 ;
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(TIWordSearchCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(unsigned long long)mecabraCreationOptions;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(BOOL)_insertString:(id)arg1 input:(id)arg2 at:(unsigned long long)arg3 force:(BOOL)arg4 ;
-(BOOL)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned long long)arg1 ;
-(BOOL)_insertKatakana:(id)arg1 reading:(id)arg2 at:(unsigned long long)arg3 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 withInputManager:(id)arg5 geometryModelData:(id)arg6 flickUsed:(BOOL)arg7 ;
-(id)kanaSearchPat:(id)arg1 ;
-(id)kanaRomaPat:(id)arg1 ;
-(void)updateDictionaryPaths;
@end

