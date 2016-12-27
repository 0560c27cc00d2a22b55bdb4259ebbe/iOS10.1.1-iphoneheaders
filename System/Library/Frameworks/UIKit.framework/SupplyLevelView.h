/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SupplyLevelView : UIView {

	int supplyLevel;
	NSArray* colors;

}

@property (assign,nonatomic) int supplyLevel; 
@property (nonatomic,retain) NSArray * colors; 
-(void)drawRect:(CGRect)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)colors;
-(BOOL)isOpaque;
-(int)supplyLevel;
-(void)setSupplyLevel:(int)arg1 ;
@end

