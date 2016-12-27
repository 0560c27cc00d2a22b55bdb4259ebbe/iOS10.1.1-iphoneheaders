/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UIViewController.h>

@class UILabel, UIButton;

@interface NTKCCFaceAddedInfoViewController : UIViewController {

	UILabel* _header;
	UILabel* _body;
	UIButton* _close;

}

@property (nonatomic,retain) UILabel * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UILabel * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) UIButton * close;              //@synthesize close=_close - In the implementation block
+(id)backgroundColor;
+(UIEdgeInsets)layoutMargins;
+(BOOL)shouldShow;
-(void)setClose:(UIButton *)arg1 ;
-(void)_closeTapped;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(UILabel *)body;
-(UIButton *)close;
-(void)setBody:(UILabel *)arg1 ;
-(UILabel *)header;
-(void)setHeader:(UILabel *)arg1 ;
@end

