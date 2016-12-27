/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleTranslatorProtocol;
@class NSRecursiveLock, NSBundle;

@interface SCROBrailleTranslationManager : NSObject {

	NSRecursiveLock* _contentLock;
	id<SCROBrailleTranslatorProtocol> _translator;
	NSBundle* _translatorBundle;
	BOOL _tableSupportsContractedBraille;
	BOOL _tableSupportsEightDotBraille;
	id<SCROBrailleTranslatorProtocol> _auxTranslator;
	NSBundle* _auxTranslatorBundle;
	BOOL _auxTableSupportsContractedBraille;
	BOOL _auxTableSupportsEightDotBraille;
	id<SCROBrailleTranslatorProtocol> _nemethTranslator;
	BOOL _alwaysUsesNemethCodeForTechnicalText;

}

@property (nonatomic,readonly) BOOL primaryTableSupportsContractedBraille;                //@synthesize tableSupportsContractedBraille=_tableSupportsContractedBraille - In the implementation block
@property (nonatomic,readonly) BOOL primaryTableSupportsEightDotBraille;                  //@synthesize tableSupportsEightDotBraille=_tableSupportsEightDotBraille - In the implementation block
@property (nonatomic,readonly) BOOL auxiliaryTableSupportsContractedBraille;              //@synthesize auxTableSupportsContractedBraille=_auxTableSupportsContractedBraille - In the implementation block
@property (nonatomic,readonly) BOOL auxiliaryTableSupportsEightDotBraille;                //@synthesize auxTableSupportsEightDotBraille=_auxTableSupportsEightDotBraille - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText;                   //@synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)lockAuxiliaryTable;
-(void)setAuxiliaryTranslationTableWithTableIdentifier:(id)arg1 ;
-(id)auxiliaryTableIdentifier;
-(void)unlockAuxiliaryTable;
-(id)printBrailleForTechnicalText:(id)arg1 primaryTable:(BOOL)arg2 locations:(id*)arg3 ;
-(id)printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 ;
-(id)textForPrintBraille:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4 ;
-(BOOL)primaryTableSupportsEightDotBraille;
-(BOOL)primaryTableSupportsContractedBraille;
-(id)primaryTableIdentifier;
-(void)setPrimaryTranslationTableWithTableIdentifier:(id)arg1 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(id)_loadTableIdentifier:(id)arg1 bundle:(id*)arg2 existingBundle:(id)arg3 existingTranslator:(id)arg4 ;
-(id)_printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 isTechnical:(BOOL)arg6 ;
-(id)printBrailleForText:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4 ;
-(id)textForPrintBraille:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 ;
-(BOOL)auxiliaryTableSupportsContractedBraille;
-(BOOL)auxiliaryTableSupportsEightDotBraille;
@end

