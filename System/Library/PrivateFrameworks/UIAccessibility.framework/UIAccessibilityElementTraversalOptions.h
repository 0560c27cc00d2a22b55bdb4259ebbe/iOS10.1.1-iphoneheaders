/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIAccessibilityElementTraversalOptions : NSObject {

	BOOL _shouldReturnScannerGroups;
	BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
	BOOL _shouldIncludeKeyboardObscuredElements;
	BOOL _shouldUseAllSubviews;
	BOOL _includeHiddenViews;
	BOOL _sorted;
	BOOL _ignoreObscuresScreen;
	BOOL _forSpeakScreen;
	BOOL _shouldIncludeStatusBarWindow;
	int _direction;
	/*^block*/id _leafNodePredicate;

}

@property (assign,nonatomic) BOOL forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) int direction;                                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL ignoreObscuresScreen;                                   //@synthesize ignoreObscuresScreen=_ignoreObscuresScreen - In the implementation block
+(id)options;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1 ;
+(id)defaultSpeakScreenOptions;
+(id)defaultVoiceOverOptions;
+(id)defaultSwitchControlOptions;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(BOOL)arg1 ;
-(void)setForSpeakScreen:(BOOL)arg1 ;
-(BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
-(BOOL)shouldReturnScannerGroups;
-(BOOL)forSpeakScreen;
-(BOOL)shouldUseAllSubviews;
-(BOOL)includeHiddenViews;
-(BOOL)sorted;
-(BOOL)ignoreObscuresScreen;
-(BOOL)shouldIncludeStatusBarWindow;
-(void)setSorted:(BOOL)arg1 ;
-(void)setLeafNodePredicate:(id)arg1 ;
-(id)leafNodePredicate;
-(void)setShouldUseAllSubviews:(BOOL)arg1 ;
-(BOOL)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(BOOL)arg1 ;
-(void)setIncludeHiddenViews:(BOOL)arg1 ;
-(void)setIgnoreObscuresScreen:(BOOL)arg1 ;
-(void)setShouldReturnScannerGroups:(BOOL)arg1 ;
@end

