/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/UpdateMigratorOperation.h>

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation {

	NSArray* _bundleIDs;
	NSDictionary* _options;

}
-(id)migratorType;
-(id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)performMigration;
-(id)copyConfiguration;
@end

