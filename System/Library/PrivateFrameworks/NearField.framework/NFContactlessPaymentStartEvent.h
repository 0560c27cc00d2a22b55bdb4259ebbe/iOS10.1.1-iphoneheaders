/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	unsigned short _selectStatus;
	unsigned short _paymentMode;
	NFApplet* _applet;

}

@property (nonatomic,readonly) NFApplet * applet;                        //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) unsigned short selectStatus;              //@synthesize selectStatus=_selectStatus - In the implementation block
@property (nonatomic,readonly) unsigned short paymentMode;               //@synthesize paymentMode=_paymentMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NFApplet *)applet;
-(id)asDictionary;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(unsigned short)selectStatus;
-(unsigned short)paymentMode;
@end

