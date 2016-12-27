/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString, UILabel, HUGridServiceCell, NSMutableArray;

@interface HUServiceDetailsHeaderView : UIView {

	BOOL _constraintsConfigured;
	NSAttributedString* _errorMessage;
	UILabel* _errorLabel;
	HUGridServiceCell* _serviceCell;
	NSMutableArray* _hideErrorLabelConstraints;
	NSMutableArray* _showErrorLabelConstraints;

}

@property (nonatomic,retain) UILabel * errorLabel;                                    //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) HUGridServiceCell * serviceCell;                         //@synthesize serviceCell=_serviceCell - In the implementation block
@property (assign,nonatomic) BOOL constraintsConfigured;                              //@synthesize constraintsConfigured=_constraintsConfigured - In the implementation block
@property (nonatomic,retain) NSMutableArray * hideErrorLabelConstraints;              //@synthesize hideErrorLabelConstraints=_hideErrorLabelConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * showErrorLabelConstraints;              //@synthesize showErrorLabelConstraints=_showErrorLabelConstraints - In the implementation block
@property (nonatomic,retain) NSAttributedString * errorMessage;                       //@synthesize errorMessage=_errorMessage - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(void)setErrorMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)errorMessage;
-(id)initWithItem:(id)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_setupHeaderViewWithItem:(id)arg1 ;
-(BOOL)constraintsConfigured;
-(void)setHideErrorLabelConstraints:(NSMutableArray *)arg1 ;
-(void)setShowErrorLabelConstraints:(NSMutableArray *)arg1 ;
-(void)setConstraintsConfigured:(BOOL)arg1 ;
-(NSMutableArray *)showErrorLabelConstraints;
-(NSMutableArray *)hideErrorLabelConstraints;
-(UILabel *)errorLabel;
-(HUGridServiceCell *)serviceCell;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)setServiceCell:(HUGridServiceCell *)arg1 ;
@end

