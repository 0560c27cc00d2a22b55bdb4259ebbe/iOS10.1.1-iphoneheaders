/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@class NSString;

@interface TSgPTPUDPv4EtEPort : TSgPTPFDEtEPort {

	NSString* _interfaceName;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned)arg2 ;
-(void)dealloc;
-(NSString *)interfaceName;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned)arg2 ;
@end

