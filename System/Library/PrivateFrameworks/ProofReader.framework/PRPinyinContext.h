/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	NSMutableArray* _guesses;
	NSMutableArray* _completions;
	NSMutableArray* _corrections;
	char* _buffer;
	char* _altBuffer;
	char* _altBufferScores;
	NSMutableArray* _geometryDataArray;
	unsigned long long* _syllableLengthArray;
	void* _connection;
	unsigned long long _length;
	unsigned long long _lengthBeforeApostrophes;
	unsigned long long _startingPoint;
	unsigned long long _lastIndexes[4];
	unsigned long long _nextIndexes[2];
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	unsigned long long _abbreviatedSyllableCount;
	unsigned long long _previouslyAnalyzedLength;
	double _validSequenceCorrectionThreshold;
	BOOL _lastSyllableIsPartial;

}
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned long long)arg1 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(id)guesses;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
-(BOOL)_addEnglishWordForRange:(NSRange)arg1 quickly:(BOOL)arg2 ;
-(BOOL)_addEnglishWordsEndingAtIndex:(unsigned long long)arg1 quickly:(BOOL)arg2 ;
-(void)_addSpecialEnglishWords;
-(void)_addEnglishWordsQuickly:(BOOL)arg1 ;
-(void)_addValidSequenceReplacements;
-(void)_removePrefixes;
-(void)_addPrefixes;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)correction;
-(id)prefixes;
-(id)completions;
@end

