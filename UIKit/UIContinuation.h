/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSObject.h"
#import "UIContinuation.h"
#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol UIContinuation <NSObject>
-(void)setValue:(id)value forProperty:(id)property;
-(id)valueForProperty:(id)property;
-(void)doContinuation;
@end

@interface UIContinuation : NSObject <UIContinuation> {
	NSMutableDictionary* _properties;
	id _continuationContext;
	id _continuationTarget;
	SEL _continuationSelector;
}
-(id)initWithTarget:(id)target context:(id)context continuationSelector:(SEL)selector;
-(id)context;
-(void)dealloc;
-(void)setValue:(id)value forProperty:(id)property;
-(id)valueForProperty:(id)property;
-(void)doContinuation;
@end
