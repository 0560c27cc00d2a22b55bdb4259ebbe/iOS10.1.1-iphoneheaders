/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

@interface MFPhonePath : MFPath {

	OITSUBezierPath* m_path;
	int m_state;

}
-(id)init;
-(void)dealloc;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)currentPoint;
-(int)end;
-(int)begin;
-(BOOL)isOpen;
-(int)flatten;
-(int)stroke:(id)arg1 ;
-(int)abort;
-(int)closeFigure;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

