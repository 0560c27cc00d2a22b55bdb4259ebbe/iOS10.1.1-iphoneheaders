/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface FCTagSettingsEntry : NSObject {

	NSString* _identifier;
	NSString* _tagID;
	NSNumber* _fontMultiplier;
	NSString* _accessToken;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagID;                       //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontMultiplier;              //@synthesize fontMultiplier=_fontMultiplier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;                 //@synthesize accessToken=_accessToken - In the implementation block
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(NSString *)accessToken;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 accessToken:(id)arg4 ;
-(NSString *)tagID;
-(NSNumber *)fontMultiplier;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
@end

