/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNActionViewProtocol.h>

@protocol CNActionsViewProtocol;
@class NSArray, NSObject, CNUIContainerStackView, NSMutableDictionary;

@interface CNActionsView : UIView <CNActionViewProtocol> {

	NSArray* _sortedActionTypes;
	NSObject*<CNActionsViewProtocol> _actionsDelegate;
	double _spacing;
	long long _style;
	CNUIContainerStackView* _stackView;
	NSMutableDictionary* _actionItemsByType;
	NSMutableDictionary* _actionViewsByType;

}

@property (nonatomic,retain) CNUIContainerStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionItemsByType;                              //@synthesize actionItemsByType=_actionItemsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionViewsByType;                              //@synthesize actionViewsByType=_actionViewsByType - In the implementation block
@property (nonatomic,copy) NSArray * sortedActionTypes;                                            //@synthesize sortedActionTypes=_sortedActionTypes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CNActionsViewProtocol> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (assign,nonatomic) double spacing;                                                       //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(long long)style;
-(CGSize)intrinsicContentSize;
-(void)setStyle:(long long)arg1 ;
-(CNUIContainerStackView *)stackView;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)resetActions;
-(NSArray *)sortedActionTypes;
-(NSMutableDictionary *)actionViewsByType;
-(unsigned long long)insertionIndexForType:(id)arg1 ;
-(void)setActionViewsByType:(NSMutableDictionary *)arg1 ;
-(id)actionViewForType:(id)arg1 ;
-(NSMutableDictionary *)actionItemsByType;
-(void)setActionItemsByType:(NSMutableDictionary *)arg1 ;
-(NSObject*<CNActionsViewProtocol>)actionsDelegate;
-(void)setSortedActionTypes:(NSArray *)arg1 ;
-(void)addActionItem:(id)arg1 ;
-(void)setActionsDelegate:(NSObject*<CNActionsViewProtocol>)arg1 ;
-(void)setStackView:(CNUIContainerStackView *)arg1 ;
@end

