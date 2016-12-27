/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_endpoint_resolver.h>

@protocol OS_nw_resolver, OS_nw_array;
@class NSObject, NWConcrete_nw_endpoint_handler, NSString;

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver> {

	NSObject*<OS_nw_resolver> resolver;
	unsigned next_child_endpoint_index;
	BOOL failed_to_start_next_child;
	NWConcrete_nw_endpoint_handler* connected_child;
	NSObject*<OS_nw_array> child_endpoint_handlers;
	NSObject*<OS_nw_array> ready_child_endpoint_handlers;
	NSObject*<OS_nw_array> failed_child_endpoint_handlers;
	void* child_timer;
	void* trigger_agent_timer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

