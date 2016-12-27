/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECRecentShareableItem : _DECItem {

	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _webUrl;
	NSString* _thumbnailPath;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * webUrl;                        //@synthesize webUrl=_webUrl - In the implementation block
@property (nonatomic,readonly) NSString * thumbnailPath;                 //@synthesize thumbnailPath=_thumbnailPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recentShareableItemWithBundleIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 webUrl:(id)arg4 thumbnailPath:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(NSString *)webUrl;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 webUrl:(id)arg4 thumbnailPath:(id)arg5 ;
-(BOOL)_isEqualToDECRecentShareableItem:(id)arg1 ;
-(NSString *)thumbnailPath;
-(BOOL)isEquivalent:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
@end

