/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICoordinateSpace <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(CGRect*)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
-(CGRect*)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;

@end

