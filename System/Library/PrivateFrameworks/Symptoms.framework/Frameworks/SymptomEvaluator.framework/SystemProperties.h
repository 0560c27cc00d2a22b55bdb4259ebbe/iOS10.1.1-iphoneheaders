/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SystemProperties : NSObject {

	BOOL _lowEndHardware;
	BOOL _internalBuild;
	BOOL _seedBuild;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;

}

@property (readonly) BOOL lowEndHardware;                    //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (readonly) BOOL internalBuild;                     //@synthesize internalBuild=_internalBuild - In the implementation block
@property (readonly) BOOL seedBuild;                         //@synthesize seedBuild=_seedBuild - In the implementation block
@property (readonly) NSString * productName;                 //@synthesize productName=_productName - In the implementation block
@property (readonly) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (readonly) NSString * buildVersion;                //@synthesize buildVersion=_buildVersion - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(NSString *)productName;
-(BOOL)internalBuild;
-(NSString *)productVersion;
-(BOOL)seedBuild;
-(BOOL)lowEndHardware;
@end

