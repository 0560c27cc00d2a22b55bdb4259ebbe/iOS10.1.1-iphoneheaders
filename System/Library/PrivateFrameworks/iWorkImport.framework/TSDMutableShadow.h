/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShadow.h>
#import <iWorkImport/TSDMutableShadow.h>

@protocol TSDMutableShadow
@required
-(void)setEnabled:(BOOL)arg1;
-(void)setColor:(id)arg1;
-(void)setOpacity:(double)arg1;
-(void)setOffset:(double)arg1;
-(void)setAngle:(double)arg1;
-(void)setRadius:(double)arg1;

@end


@interface TSDMutableShadow : TSDShadow <TSDMutableShadow>
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
@end

