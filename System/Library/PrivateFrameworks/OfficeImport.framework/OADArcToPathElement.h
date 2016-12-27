/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADArcToPathElement : OADPathElement {

	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;

}
-(OADAdjustCoord)startAngle;
-(id)initWithSemiaxes:(OADAdjustPoint)arg1 startAngle:(OADAdjustCoord)arg2 angleLength:(OADAdjustCoord)arg3 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
@end
