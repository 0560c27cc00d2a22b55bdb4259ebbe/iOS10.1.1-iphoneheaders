/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, NSIndexSet, NSAttributedString, UIFont;

@interface EKDayOccurrenceContentView : UIView {

	NSString* _title;
	NSString* _location;
	UIColor* _color;
	UIColor* _titleTextColor;
	UIColor* _timeTextColor;
	UIColor* _secondaryTextColor;
	UIColor* _textBackgroundColor;
	UIColor* _statusTextColor;
	NSIndexSet* _titleMetrics;
	CGPoint _titleEndPoint;
	double _textEndY;
	CGRect _titleRect;
	CGRect _fullTextRect;
	NSAttributedString* _attributedContentString;
	unsigned long long _fontCompressionDegree;
	UIFont* _cachedPrimaryFont;
	double _cachedLineHeight;
	double _minimumCachedLineHeight;
	UIFont* _cachedSecondaryFont;
	double _cachedSecondaryLineHeight;
	double _cachedPrimaryFontTopOutset;
	double _cachedPrimaryFontBottomOutset;
	BOOL _facebook;
	BOOL _birthday;
	BOOL _allDay;
	BOOL _cancelled;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _selected;
	BOOL _allDayDrawingStyle;
	BOOL _usesSmallText;
	BOOL _hideText;
	BOOL _reduceProcessingForAnimation;
	int _occurrenceBackgroundStyle;
	NSString* _time;

}

@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * time;                                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * location;                                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                  //@synthesize color=_color - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) BOOL birthday; 
@property (assign,getter=isFacebook,nonatomic) BOOL facebook; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isTentative,nonatomic) BOOL tentative;                                //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) BOOL declined;                                  //@synthesize declined=_declined - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                                  //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isAllDayDrawingStyle,nonatomic) BOOL allDayDrawingStyle;              //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                               //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor; 
@property (nonatomic,retain) UIColor * timeTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor; 
@property (assign,nonatomic) BOOL hideText;                                                    //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                                    //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL reduceProcessingForAnimation;                                //@synthesize reduceProcessingForAnimation=_reduceProcessingForAnimation - In the implementation block
+(Class)layerClass;
+(id)defaultSecondaryTextFont;
+(id)defaultPrimaryTextFont;
+(id)defaultSmallPrimaryTextFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)location;
-(BOOL)selected;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)time;
-(void)setTime:(NSString *)arg1 ;
-(BOOL)hasIcon;
-(void)setAllDay:(BOOL)arg1 ;
-(UIColor *)timeTextColor;
-(BOOL)isAllDay;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(void)setTimeTextColor:(UIColor *)arg1 ;
-(void)setTextBackgroundColor:(UIColor *)arg1 ;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(BOOL)usesSmallText;
-(void)setTentative:(BOOL)arg1 ;
-(void)setDeclined:(BOOL)arg1 ;
-(void)setNeedsReply:(BOOL)arg1 ;
-(double)minimumNaturalHeightForPrimaryText;
-(BOOL)isBirthday;
-(BOOL)isFacebook;
-(BOOL)needsReply;
-(BOOL)isTentative;
-(void)_invalidateCachedFonts;
-(void)setBirthday:(BOOL)arg1 ;
-(void)setFacebook:(BOOL)arg1 ;
-(BOOL)isAllDayDrawingStyle;
-(void)setAllDayDrawingStyle:(BOOL)arg1 ;
-(void)invalidateCachedFontMetrics;
-(void)_invalidateMetrics;
-(BOOL)reduceProcessingForAnimation;
-(double)_primaryFontLineHeight;
-(CGSize)_spaceForText;
-(double)topTextOutset;
-(double)bottomTextOutset;
-(id)_primaryTextFont;
-(double)_minimumPrimaryFontLineHeight;
-(id)_statusText;
-(id)_secondaryText;
-(id)_timeText;
-(double)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
-(id)strikethroughColor;
-(id)_timeTextFont;
-(id)_secondaryTextFont;
-(id)statusTextColor;
-(id)attributedContentStringUnconstrained:(BOOL)arg1 ;
-(double)minimumNaturalHeightAllText;
-(double)attributedStringMinimumLineHeight;
-(double)_secondaryFontLineHeight;
-(void)_getLanguageAwareOutsets;
-(BOOL)hideText;
-(id)attributedContentString;
-(double)textNaturalWidth;
-(CGRect)_frameForText;
-(UIColor *)textBackgroundColor;
-(id)_statusTextFont;
-(void)setReduceProcessingForAnimation:(BOOL)arg1 ;
-(void)setHideText:(BOOL)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(id)stringDrawingContext;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(BOOL)isDeclined;
@end

