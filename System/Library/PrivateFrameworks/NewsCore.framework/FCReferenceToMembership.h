/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCReferenceToMembership : NSObject {

	NSString* _identifier;
	NSString* _membershipID;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * membershipID;              //@synthesize membershipID=_membershipID - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSString *)membershipID;
-(id)initWithRecord:(id)arg1 ;
@end
