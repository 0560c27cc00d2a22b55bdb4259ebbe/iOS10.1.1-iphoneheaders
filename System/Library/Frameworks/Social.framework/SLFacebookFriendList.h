/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SLFacebookFriendList : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _type;

}

@property (retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSString * type;                    //@synthesize type=_type - In the implementation block
+(id)friendListWithDictionary:(id)arg1 ;
+(id)friendListsWithResponseData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithFriendListDictionary:(id)arg1 ;
@end

