/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	BOOL _actionable;
	BOOL _expired;
	long long _status;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	long long _direction;

}

@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL actionable;                            //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) BOOL expired;                               //@synthesize expired=_expired - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)copyDictionaryRepresentation;
-(BOOL)isLastMessageCandidate;
-(BOOL)expired;
-(BOOL)actionable;
-(void)setExpired:(BOOL)arg1 ;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)setActionable:(BOOL)arg1 ;
-(NSString *)otherUnformattedID;
-(NSString *)otherCountryCode;
@end

