/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <NanoAppSync/NASAppSyncMetaDataItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NASAppSyncAnchor;

@interface NASAppSyncMetaDataItemDelete : NSObject <NASAppSyncMetaDataItem, NSCoding> {

	NSString* _appId;
	NASAppSyncAnchor* _anchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)initWithAppId:(id)arg1 anchor:(id)arg2 ;
-(id)scrapeAppInfo;
-(BOOL)NAS_isMetaDataItemDelete;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NASAppSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end

