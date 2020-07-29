function(Node* head_A, Node* head_B)
{

	Node* temp = new Node(-1);
	Node* last = temp;


	while (head_A != NULL && head_B != NULL)
	{
		if (head_A->data <= head_B->data)
		{
			last->next = head_A;
			last = head_A;
			head_A = head_A->next;
		}
		else {
			last->next = head_B;
			last = head_B;
			head_B = head_B->next;
		}
	}
	if (head_A != NULL)
	{
		last->next = head_A;
	}
	else {
		last->next = head_B;
	}

	return temp->next;



}