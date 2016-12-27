/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption {

	BOOL _isDefaultPhoto;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultPhoto;              //@synthesize isDefaultPhoto=_isDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(BOOL)isDefaultPhoto;
@end

