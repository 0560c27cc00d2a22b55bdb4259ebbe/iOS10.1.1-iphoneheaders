/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UICalloutBarButton, UICalloutBarBackground, NSDictionary, NSString, UIResponder;

@interface UICalloutBar : UIView {

	id m_delegate;
	CGPoint m_pointBelowControls;
	CGPoint m_pointAboveControls;
	CGPoint m_pointLeftOfControls;
	CGPoint m_pointRightOfControls;
	CGPoint m_targetPoint;
	int m_targetDirection;
	BOOL m_targetHorizontal;
	BOOL m_fadeAfterCommand;
	BOOL m_recalcVisibleItems;
	int m_pageCount;
	int m_currentPage;
	BOOL m_supressesHorizontalMovement;
	CGRect m_controlFrame;
	CGRect m_targetRect;
	CGRect m_supressesHorizontalMovementFrame;
	double m_supressedHorizontalMovementX;
	int m_arrowDirection;
	double m_availableSpaceOnLeft;
	double m_availableSpaceOnRight;
	NSArray* m_systemButtonDescriptions;
	NSMutableArray* m_currentSystemButtons;
	NSMutableArray* m_extraButtons;
	UICalloutBarButton* m_nextButton;
	UICalloutBarButton* m_previousButton;
	NSMutableArray* m_rectsToEvade;
	UICalloutBarBackground* m_overlay;
	double m_fadedTime;
	NSDictionary* m_currentAppearOrFadeContext;
	id m_responderTarget;
	NSArray* m_replacements;
	NSArray* m_extraItems;
	NSString* m_untruncatedString;
	BOOL m_didPromptForReplace;
	BOOL m_showAllReplacements;
	BOOL m_ignoreFade;
	BOOL m_suppressesAppearance;

}

@property (assign,nonatomic) CGPoint pointAboveControls; 
@property (assign,nonatomic) CGPoint pointBelowControls; 
@property (assign,nonatomic) CGPoint pointLeftOfControls; 
@property (assign,nonatomic) CGPoint pointRightOfControls; 
@property (assign,nonatomic) CGPoint targetPoint; 
@property (assign,nonatomic) int targetDirection; 
@property (assign,nonatomic) BOOL targetHorizontal; 
@property (assign,nonatomic) CGRect targetRect; 
@property (assign,nonatomic) int arrowDirection; 
@property (assign,nonatomic) CGRect controlFrame; 
@property (nonatomic,retain) NSDictionary * currentAppearOrFadeContext; 
@property (assign,nonatomic) BOOL suppressesAppearance; 
@property (nonatomic,readonly) NSArray * rectsToEvade; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic,__weak) UIResponder * responderTarget; 
@property (nonatomic,copy) NSArray * replacements; 
@property (assign,nonatomic) BOOL showAllReplacements; 
@property (nonatomic,copy) NSArray * extraItems; 
@property (nonatomic,copy) NSString * untruncatedString; 
@property (assign,nonatomic) BOOL supressesHorizontalMovement; 
+(id)activeCalloutBar;
+(void)fadeSharedCalloutBar;
+(id)sharedCalloutBar;
+(void)performWithoutAffectingSharedCalloutBar:(/*^block*/id)arg1 ;
+(void)_releaseSharedInstance;
+(BOOL)sharedCalloutBarIsVisible;
+(void)hideSharedCalloutBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(id)delegate;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)visible;
-(void)fade;
-(void)setSupressesHorizontalMovement:(BOOL)arg1 ;
-(void)clearSupressesHorizontalMovementFrame;
-(void)setUntruncatedString:(NSString *)arg1 ;
-(int)textEffectsVisibilityLevel;
-(CGRect)targetRect;
-(BOOL)hasReplacements;
-(NSArray *)replacements;
-(NSArray *)extraItems;
-(void)setExtraItems:(NSArray *)arg1 ;
-(void)update;
-(void)setResponderTarget:(UIResponder *)arg1 ;
-(BOOL)recentlyFaded;
-(void)clearEvadeRects;
-(void)addRectToEvade:(CGRect)arg1 ;
-(void)setTargetRect:(CGRect)arg1 pointBelowControls:(CGPoint)arg2 pointAboveControls:(CGPoint)arg3 ;
-(void)setReplacements:(NSArray *)arg1 ;
-(void)appear;
-(void)clearReplacements;
-(CGRect)controlFrame;
-(int)targetDirection;
-(CGPoint)targetPoint;
-(void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(void)_showPreviousItems:(id)arg1 ;
-(void)_showNextItems:(id)arg1 ;
-(void)applicationDidAddDeactivationReason:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 ;
-(void)_fadeAfterCommand:(SEL)arg1 ;
-(BOOL)_updateVisibleItemsAnimated:(BOOL)arg1 ;
-(CGRect)textEffectsWindowBoundsWithoutStatusBar;
-(NSArray *)rectsToEvade;
-(BOOL)supressesHorizontalMovement;
-(double)supressHorizontalXMovementIfNeededForPoint:(CGPoint)arg1 proposedX:(double)arg2 ;
-(BOOL)rectClear:(CGRect)arg1 ;
-(int)arrowDirection;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 below:(BOOL)arg2 ;
-(void)setTargetDirection:(int)arg1 ;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 right:(BOOL)arg2 ;
-(BOOL)calculateControlFrameInsideTargetRect:(CGSize)arg1 ;
-(CGPoint)pointBelowControls;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(CGPoint)pointAboveControls;
-(void)shrinkButtonTextSize:(id)arg1 ;
-(void)setControlFrame:(CGRect)arg1 ;
-(void)updateAvailableButtons;
-(BOOL)setFrameForSize:(CGSize)arg1 ;
-(void)configureButtons:(double)arg1 ;
-(void)adjustFrameToAvoidDividerOnArrow;
-(void)updateForCurrentPage;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)setArrowDirection:(int)arg1 ;
-(void)setTargetHorizontal:(BOOL)arg1 ;
-(void)setPointBelowControls:(CGPoint)arg1 ;
-(void)setPointAboveControls:(CGPoint)arg1 ;
-(void)setPointLeftOfControls:(CGPoint)arg1 ;
-(void)setPointRightOfControls:(CGPoint)arg1 ;
-(BOOL)suppressesAppearance;
-(void)_endOngoingAppearOrFadeAnimations;
-(void)setCurrentAppearOrFadeContext:(NSDictionary *)arg1 ;
-(void)appearAnimationDidStopWithContext:(id)arg1 ;
-(NSDictionary *)currentAppearOrFadeContext;
-(void)fadeAnimationDidStopWithContext:(id)arg1 finished:(BOOL)arg2 ;
-(void)resetPage;
-(void)setTargetRect:(CGRect)arg1 pointLeftOfControls:(CGPoint)arg2 pointRightOfControls:(CGPoint)arg3 ;
-(void)setTargetRect:(CGRect)arg1 arrowDirection:(int)arg2 ;
-(void)updateAnimated:(BOOL)arg1 ;
-(CGPoint)pointLeftOfControls;
-(CGPoint)pointRightOfControls;
-(BOOL)targetHorizontal;
-(UIResponder *)responderTarget;
-(BOOL)showAllReplacements;
-(void)setShowAllReplacements:(BOOL)arg1 ;
-(NSString *)untruncatedString;
-(void)setSuppressesAppearance:(BOOL)arg1 ;
@end

