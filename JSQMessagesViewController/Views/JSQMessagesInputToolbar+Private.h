//
//  JSQMessagesInputToolbar+Private.h
//  JSQMessages
//
//  Created by AK on 2015-07-17.
//
//

#import "JSQMessagesInputToolbar.h"

@interface JSQMessagesInputToolbar ()

/**
 *
 * Adds observers for contentView buttons.
 */
- (void)jsq_addContentViewObservers;

/**
 *
 * Removes observers for contentView buttons.
 */
- (void)jsq_removeContentViewObservers;
@end
