/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions {

	ASDJobManifest* _manifest;

}

@property (nonatomic,copy) ASDJobManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManifest:(ASDJobManifest *)arg1 ;
-(ASDJobManifest *)manifest;
-(id)initWithManifest:(id)arg1 ;
@end

