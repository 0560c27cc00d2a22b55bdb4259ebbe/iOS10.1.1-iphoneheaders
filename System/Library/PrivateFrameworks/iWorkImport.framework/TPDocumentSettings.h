/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSString;

@interface TPDocumentSettings : TSPObject {

	BOOL _hasBody;
	BOOL _hasHeaders;
	BOOL _hasFooters;
	BOOL _qlPreview;
	BOOL _copyMovies;
	BOOL _copyAssets;
	BOOL _placeholderAuthoring;
	BOOL _sectionAuthoring;
	BOOL _linksEnabled;
	BOOL _hyphenation;
	BOOL _ligatures;
	BOOL _tocLinksEnabled;
	BOOL _showCTMarkup;
	BOOL _showCTDeletions;
	int _ctBubblesVisibility;
	BOOL _changeBarsVisible;
	BOOL _formatChangesVisible;
	BOOL _annotationsVisible;
	BOOL _documentIsRTL;
	int _footnoteKind;
	int _footnoteFormat;
	int _footnoteNumbering;
	long long _footnoteGap;
	NSString* _decimalTab;
	NSString* _language;
	NSString* _hyphenationLanguage;
	NSString* _creationLocale;
	NSString* _originalTemplate;
	NSString* _creationDate;
	NSString* _bibliographyFormat;

}

@property (assign,nonatomic) BOOL hasBody; 
@property (assign,nonatomic) BOOL hasHeaders; 
@property (assign,nonatomic) BOOL hasFooters; 
@property (assign,nonatomic) BOOL quickLookPreview; 
@property (assign,nonatomic) BOOL copyMovies; 
@property (assign,nonatomic) BOOL copyTemplateAssets; 
@property (assign,nonatomic) BOOL placeholderAuthoring; 
@property (assign,nonatomic) BOOL sectionAuthoring; 
@property (assign,nonatomic) BOOL hyperlinksEnabled; 
@property (assign,nonatomic) BOOL autoHyphenation; 
@property (assign,nonatomic) BOOL useLigatures; 
@property (assign,nonatomic) BOOL tocLinksEnabled; 
@property (assign,nonatomic) BOOL documentIsRTL; 
@property (assign,nonatomic) BOOL showCTMarkup; 
@property (assign,nonatomic) BOOL showCTDeletions; 
@property (assign,nonatomic) int ctBubblesVisibility;                   //@synthesize ctBubblesVisibility=_ctBubblesVisibility - In the implementation block
@property (assign,nonatomic) BOOL changeBarsVisible; 
@property (assign,nonatomic) BOOL formatChangesVisible; 
@property (assign,nonatomic) BOOL annotationsVisible; 
@property (assign,nonatomic) int footnoteKind; 
@property (assign,nonatomic) int footnoteFormat; 
@property (assign,nonatomic) int footnoteNumbering; 
@property (assign,nonatomic) long long footnoteGap; 
@property (nonatomic,readonly) int basicFootnoteFormat; 
@property (nonatomic,copy) NSString * decimalTab; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * hyphenationLanguage; 
@property (nonatomic,copy) NSString * creationLocale; 
@property (nonatomic,copy) NSString * originalTemplate; 
@property (nonatomic,copy) NSString * creationDate; 
@property (nonatomic,copy) NSString * bibliographyFormat; 
-(BOOL)hasHeaders;
-(BOOL)hasFooters;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)documentIsRTL;
-(BOOL)useLigatures;
-(long long)footnoteGap;
-(void)resetForNewDocumentFromTemplate:(id)arg1 ;
-(void)setDocumentIsRTL:(BOOL)arg1 ;
-(BOOL)autoHyphenation;
-(NSString *)hyphenationLanguage;
-(int)footnoteKind;
-(void)setDecimalTab:(NSString *)arg1 ;
-(void)setHyphenationLanguage:(NSString *)arg1 ;
-(void)setCreationLocale:(NSString *)arg1 ;
-(id)stringWithCurrentDate;
-(void)setOriginalTemplate:(NSString *)arg1 ;
-(void)setPlaceholderAuthoring:(BOOL)arg1 ;
-(void)setHyperlinksEnabled:(BOOL)arg1 ;
-(void)setQuickLookPreview:(BOOL)arg1 ;
-(void)setCopyMovies:(BOOL)arg1 ;
-(void)setCopyTemplateAssets:(BOOL)arg1 ;
-(void)setFootnoteFormat:(int)arg1 ;
-(void)setHasHeaders:(BOOL)arg1 ;
-(void)setHasFooters:(BOOL)arg1 ;
-(BOOL)quickLookPreview;
-(BOOL)copyMovies;
-(BOOL)copyTemplateAssets;
-(BOOL)placeholderAuthoring;
-(BOOL)hyperlinksEnabled;
-(void)setAutoHyphenation:(BOOL)arg1 ;
-(void)setUseLigatures:(BOOL)arg1 ;
-(BOOL)tocLinksEnabled;
-(void)setTocLinksEnabled:(BOOL)arg1 ;
-(BOOL)showCTMarkup;
-(void)setShowCTMarkup:(BOOL)arg1 ;
-(BOOL)showCTDeletions;
-(void)setShowCTDeletions:(BOOL)arg1 ;
-(int)ctBubblesVisibility;
-(void)setCTBubblesVisibility:(int)arg1 ;
-(BOOL)changeBarsVisible;
-(void)setChangeBarsVisible:(BOOL)arg1 ;
-(BOOL)formatChangesVisible;
-(void)setFormatChangesVisible:(BOOL)arg1 ;
-(BOOL)annotationsVisible;
-(void)setAnnotationsVisible:(BOOL)arg1 ;
-(BOOL)sectionAuthoring;
-(void)setSectionAuthoring:(BOOL)arg1 ;
-(void)setFootnoteKind:(int)arg1 ;
-(int)footnoteFormat;
-(int)footnoteNumbering;
-(void)setFootnoteNumbering:(int)arg1 ;
-(void)setFootnoteGap:(long long)arg1 ;
-(NSString *)decimalTab;
-(NSString *)creationLocale;
-(NSString *)originalTemplate;
-(NSString *)bibliographyFormat;
-(void)setBibliographyFormat:(NSString *)arg1 ;
-(int)basicFootnoteFormat;
-(void)setHasBody:(BOOL)arg1 ;
-(void)setCtBubblesVisibility:(int)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasBody;
-(NSString *)creationDate;
-(void)setCreationDate:(NSString *)arg1 ;
@end

