/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/_RidesharingOperation.h>

@protocol _RidesharingOperation <NSObject>
@required
-(void)requestTimeoutExtension;
-(id)contextForIntentClass:(Class)arg1;
-(void)complete;

@end


@class NSMapTable, NSString;

@interface _RidesharingOperation : NSObject <_RidesharingOperation> {

	NSMapTable* _contextsByClass;
	/*^block*/id _keepAlive;
	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestTimeoutExtension;
-(id)initWithContextsByClass:(id)arg1 requestTimeoutExtensionBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)contextForIntentClass:(Class)arg1 ;
-(void)complete;
@end

