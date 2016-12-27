/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSString;

@interface TIKeyboardInputManagerConfig : NSObject {

	BOOL _allowsSpaceCorrections;
	BOOL _usesTextChecker;
	BOOL _usesRetrocorrection;
	BOOL _usesWordNgramModel;
	BOOL _usesWordNgramModelAdaptation;
	BOOL _completionsShouldSharePrefix;
	BOOL _testing;
	TIInputMode* _inputMode;
	NSString* _staticDictionaryPath;
	NSString* _dynamicResourcePath;
	NSString* _ngramModelPath;
	unsigned long long _maxWordsPerPrediction;

}

@property (nonatomic,retain) TIInputMode * inputMode;                               //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSString * staticDictionaryPath;                         //@synthesize staticDictionaryPath=_staticDictionaryPath - In the implementation block
@property (nonatomic,copy) NSString * dynamicResourcePath;                          //@synthesize dynamicResourcePath=_dynamicResourcePath - In the implementation block
@property (nonatomic,copy) NSString * ngramModelPath;                               //@synthesize ngramModelPath=_ngramModelPath - In the implementation block
@property (assign,nonatomic) BOOL allowsSpaceCorrections;                           //@synthesize allowsSpaceCorrections=_allowsSpaceCorrections - In the implementation block
@property (assign,nonatomic) BOOL usesTextChecker;                                  //@synthesize usesTextChecker=_usesTextChecker - In the implementation block
@property (assign,nonatomic) BOOL usesRetrocorrection;                              //@synthesize usesRetrocorrection=_usesRetrocorrection - In the implementation block
@property (assign,nonatomic) BOOL usesWordNgramModel;                               //@synthesize usesWordNgramModel=_usesWordNgramModel - In the implementation block
@property (assign,nonatomic) BOOL usesWordNgramModelAdaptation;                     //@synthesize usesWordNgramModelAdaptation=_usesWordNgramModelAdaptation - In the implementation block
@property (assign,nonatomic) unsigned long long maxWordsPerPrediction;              //@synthesize maxWordsPerPrediction=_maxWordsPerPrediction - In the implementation block
@property (assign,nonatomic) BOOL completionsShouldSharePrefix;                     //@synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix - In the implementation block
@property (assign,getter=isTesting,nonatomic) BOOL testing;                         //@synthesize testing=_testing - In the implementation block
+(id)configurationForInputMode:(id)arg1 ;
-(void)dealloc;
-(void)setInputMode:(TIInputMode *)arg1 ;
-(TIInputMode *)inputMode;
-(id)propertyList;
-(NSString *)dynamicResourcePath;
-(BOOL)usesRetrocorrection;
-(NSString *)staticDictionaryPath;
-(void)setStaticDictionaryPath:(NSString *)arg1 ;
-(void)setDynamicResourcePath:(NSString *)arg1 ;
-(NSString *)ngramModelPath;
-(void)setNgramModelPath:(NSString *)arg1 ;
-(BOOL)allowsSpaceCorrections;
-(void)setAllowsSpaceCorrections:(BOOL)arg1 ;
-(BOOL)usesTextChecker;
-(void)setUsesTextChecker:(BOOL)arg1 ;
-(void)setUsesRetrocorrection:(BOOL)arg1 ;
-(BOOL)usesWordNgramModel;
-(void)setUsesWordNgramModel:(BOOL)arg1 ;
-(BOOL)usesWordNgramModelAdaptation;
-(void)setUsesWordNgramModelAdaptation:(BOOL)arg1 ;
-(unsigned long long)maxWordsPerPrediction;
-(void)setMaxWordsPerPrediction:(unsigned long long)arg1 ;
-(BOOL)completionsShouldSharePrefix;
-(void)setCompletionsShouldSharePrefix:(BOOL)arg1 ;
-(BOOL)isTesting;
-(void)setTesting:(BOOL)arg1 ;
@end

