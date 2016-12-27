/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPBTLETransactionIdentifier, HAPCharacteristic, NSData, HMFBlockOperation, HAPBTLEControlOutputStream, HMFTimer;

@interface HAPBTLERequest : NSObject {

	unsigned char _type;
	BOOL _encrypted;
	BOOL _finished;
	HAPBTLETransactionIdentifier* _identifier;
	HAPCharacteristic* _characteristic;
	NSData* _body;
	double _timeoutInterval;
	HMFBlockOperation* _operation;
	HAPBTLEControlOutputStream* _controlOutputStream;
	HMFTimer* _responseTimer;

}

@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPCharacteristic * characteristic;                          //@synthesize characteristic=_characteristic - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                             //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                      //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic,__weak) HMFBlockOperation * operation;                          //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HAPBTLEControlOutputStream * controlOutputStream;              //@synthesize controlOutputStream=_controlOutputStream - In the implementation block
@property (nonatomic,retain) HMFTimer * responseTimer;                                      //@synthesize responseTimer=_responseTimer - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(HMFBlockOperation *)operation;
-(void)setOperation:(HMFBlockOperation *)arg1 ;
-(HAPBTLETransactionIdentifier *)identifier;
-(unsigned char)type;
-(NSData *)body;
-(id)shortDescription;
-(BOOL)isFinished;
-(double)timeoutInterval;
-(void)cancelWithError:(id)arg1 ;
-(void)setResponseTimer:(HMFTimer *)arg1 ;
-(void)setControlOutputStream:(HAPBTLEControlOutputStream *)arg1 ;
-(HMFTimer *)responseTimer;
-(HAPBTLEControlOutputStream *)controlOutputStream;
-(id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5 ;
-(id)_serializeHeader;
-(id)serialize;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPCharacteristic *)characteristic;
-(BOOL)isEncrypted;
@end

