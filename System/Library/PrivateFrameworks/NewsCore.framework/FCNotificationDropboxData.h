/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNotificationDropboxData.h>
@class NSString;


@protocol FCNotificationDropboxData <NSObject,NSMutableCopying>
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
@required
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(NSString *)baseURLString;
-(NSString *)notificationUserID;

@end


@class NSString, NSDictionary;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(NSString *)baseURLString;
-(NSString *)notificationUserID;
@end
