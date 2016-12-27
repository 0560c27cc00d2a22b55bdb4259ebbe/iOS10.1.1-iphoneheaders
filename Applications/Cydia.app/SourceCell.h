/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteTableViewCell.h>
#import <Cydia/CyteTableViewCellDelegate.h>
#import <Cydia/SourceDelegate.h>

@interface SourceCell : CyteTableViewCell <CyteTableViewCellDelegate, SourceDelegate> {

	MenesObjectHandle<Source, 1> source_;
	MenesObjectHandle<NSURL, 0> url_;
	MenesObjectHandle<UIImage, 0> icon_;
	MenesObjectHandle<NSString, 0> origin_;
	MenesObjectHandle<NSString, 0> label_;
	MenesObjectHandle<UIActivityIndicatorView, 0> indicator_;

}
-(void)drawContentRect:(CGRect)arg1 ;
-(void)setFetch:(id)arg1 ;
-(void)setAllSource;
-(void)layoutSubviews;
-(void)setSource:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)_setSource:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
@end

