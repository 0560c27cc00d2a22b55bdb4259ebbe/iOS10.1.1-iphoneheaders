/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString, NSDictionary;

@interface PLSItem : NSObject <NSCoding, PLSTransportCoding> {

	NSString* _uuid;
	NSDictionary* _hostInfo;
	id _userInfo;

}

@property (nonatomic,retain) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDictionary * hostInfo;              //@synthesize hostInfo=_hostInfo - In the implementation block
@property (nonatomic,retain) id userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
-(id)initFromPropertyList:(id)arg1 ;
-(NSDictionary *)hostInfo;
-(id)_itemType;
-(void)setHostInfo:(NSDictionary *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(id)initWithUUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(id)propertyList;
@end

