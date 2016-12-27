/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPPerson.h>

@protocol MPPerson <NSObject>
@required
-(id)name;
-(id)address;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPPerson : NSObject <MPPerson, NSSecureCoding> {

	NSString* _name;
	NSString* _address;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)personWithName:(id)arg1 address:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(id)initWithName:(id)arg1 address:(id)arg2 ;
@end

